//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AssistantUI/AFUISceneControllerDelegate-Protocol.h>

@class AFUISceneConfiguration, AFUISceneController, FBScene, FBSceneClientProviderInvalidationAction, NSString, UIView;
@protocol BSInvalidatable, FBSceneHost, UIScenePresenter;

@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate>
{
    _Bool _pauseDeferrals;
    long long _deferralMode;
    AFUISceneConfiguration *_configuration;
    AFUISceneController *_sceneController;
    UIView *_windowSceneHostingView;
    id <UIScenePresenter> _presentation;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    id <FBSceneHost> _sceneHost;
    FBScene *_scene;
    id <BSInvalidatable> _predicateInvalidationHandler;
    long long _currentOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) _Bool pauseDeferrals; // @synthesize pauseDeferrals=_pauseDeferrals;
@property(retain, nonatomic) id <BSInvalidatable> predicateInvalidationHandler; // @synthesize predicateInvalidationHandler=_predicateInvalidationHandler;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(nonatomic) id <FBSceneHost> sceneHost; // @synthesize sceneHost=_sceneHost;
@property(retain, nonatomic) FBSceneClientProviderInvalidationAction *invalidationAction; // @synthesize invalidationAction=_invalidationAction;
@property(retain, nonatomic) id <UIScenePresenter> presentation; // @synthesize presentation=_presentation;
@property(retain, nonatomic) UIView *windowSceneHostingView; // @synthesize windowSceneHostingView=_windowSceneHostingView;
@property(retain, nonatomic) AFUISceneController *sceneController; // @synthesize sceneController=_sceneController;
@property(readonly, nonatomic) AFUISceneConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long deferralMode; // @synthesize deferralMode=_deferralMode;
- (_Bool)_hasScene;
- (void)sceneController:(id)arg1 sceneDidUpdateClientSettings:(id)arg2;
- (void)sceneController:(id)arg1 sceneWasInvalidated:(id)arg2 forReason:(unsigned long long)arg3;
- (void)sceneController:(id)arg1 sceneContentStateDidChange:(id)arg2;
- (id)sceneConfigurationForDelegate;
- (void)_updateDeferralChainWithWindow:(id)arg1;
- (_Bool)_shouldDeferHIDEventsForMode;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1;
- (void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_transitionContentsWithView:(id)arg1 forContentState:(long long)arg2;
- (void)updateSceneWithConfiguration:(id)arg1;
- (void)invalidateAndPauseDeferringHIDEvents;
- (void)startDeferringHIDEventsIfNeeded;
- (_Bool)isDeferringHIDEvents;
- (_Bool)isHostingScene;
- (void)deactivateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)stopHostingScene;
- (void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1;
- (void)updateSettingsForInterfaceOrientationChange:(long long)arg1 willAnimationWithDuration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

