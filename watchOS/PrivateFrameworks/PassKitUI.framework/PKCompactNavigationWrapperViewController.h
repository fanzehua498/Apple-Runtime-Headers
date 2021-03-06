//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKWrapperViewController.h>

@class PKCompactNavigationContainedNavigationController;

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController
{
    PKCompactNavigationContainedNavigationController *_parentNavigationController;
    float _navigationBarHeight;
    _Bool _needsInitialLayout;
    _Bool _hasExplicitTargetNavigationHeight;
    float _targetNavigationHeight;
}

- (void).cxx_destruct;
@property(nonatomic) float targetNavigationHeight; // @synthesize targetNavigationHeight=_targetNavigationHeight;
@property(readonly, nonatomic) _Bool hasExplicitTargetNavigationHeight; // @synthesize hasExplicitTargetNavigationHeight=_hasExplicitTargetNavigationHeight;
@property(readonly, nonatomic) _Bool needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
- (struct CGRect)_wrappedViewControllerFrameForBounds:(struct CGRect)arg1 navigationBarHeight:(float)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (id)initWithWrappedViewController:(id)arg1 parentNavigationController:(id)arg2;
- (id)initWithWrappedViewController:(id)arg1 type:(int)arg2;

@end

