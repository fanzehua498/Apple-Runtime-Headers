//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlatterKit/PLGlyphControl.h>

#import <UserNotificationsUIKit/NCClickInteractionPresenterDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCClickInteractionPresenter, NCToggleControlPair, NSString, UILabel;
@protocol NCToggleControlDelegate;

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _expanded;
    _Bool _glyphAlwaysVisible;
    _Bool _expandedPriorToControlEvent;
    unsigned int _anchorEdge;
    NSString *_preferredContentSizeCategory;
    id <NCToggleControlDelegate> _delegate;
    unsigned long long _toggleControlType;
    UILabel *_titleLabel;
    NCToggleControlPair *_managingPair;
    NCClickInteractionPresenter *_previewInteractionPlatterPresenter;
    struct CGSize _cachedEffectiveMaxExpandedSize;
    struct CGSize _cachedEffectiveMaxUnexpandedSize;
}

+ (id)_labelFont:(_Bool)arg1;
+ (double)effectiveHeight:(_Bool)arg1;
+ (void)performWithDefaultExpansionAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)showLessControlWithMaterialRecipe:(long long)arg1;
+ (id)dismissControlWithMaterialRecipe:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=_wasExpandedPriorToControlEvent) _Bool expandedPriorToControlEvent; // @synthesize expandedPriorToControlEvent=_expandedPriorToControlEvent;
@property(retain, nonatomic, getter=_previewInteractionPlatterPresenter) NCClickInteractionPresenter *previewInteractionPlatterPresenter; // @synthesize previewInteractionPlatterPresenter=_previewInteractionPlatterPresenter;
@property(nonatomic, getter=_managingPair, setter=_setManagingPair:) __weak NCToggleControlPair *managingPair; // @synthesize managingPair=_managingPair;
@property(readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic, getter=_toggleControlType) unsigned long long toggleControlType; // @synthesize toggleControlType=_toggleControlType;
@property(nonatomic) __weak id <NCToggleControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isGlyphAlwaysVisible) _Bool glyphAlwaysVisible; // @synthesize glyphAlwaysVisible=_glyphAlwaysVisible;
@property(nonatomic) unsigned int anchorEdge; // @synthesize anchorEdge=_anchorEdge;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (struct CGRect)_unexpandedFrame;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 whenExpanded:(_Bool)arg2;
- (struct CGSize)_effectiveGlyphSize;
- (double)_cornerRadius;
- (struct CGSize)_effectiveUnexpandedSize;
@property(readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) struct CGSize cachedEffectiveMaxUnexpandedSize; // @synthesize cachedEffectiveMaxUnexpandedSize=_cachedEffectiveMaxUnexpandedSize;
- (struct CGSize)_effectiveExpandedSize;
@property(readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) struct CGSize cachedEffectiveMaxExpandedSize; // @synthesize cachedEffectiveMaxExpandedSize=_cachedEffectiveMaxExpandedSize;
- (double)_effectiveInternalPadding;
- (double)_effectiveLeadingTrailingPadding;
- (double)_effectiveHeight;
- (double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1;
- (void)_updateTitleLabelVisualStyling;
- (void)_updateTitleLabelTextAttributes;
- (id)_labelFont;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)clickInteractionPresenterDidDismiss:(id)arg1;
- (void)clickInteractionPresenterDidPresent:(id)arg1;
- (void)clickInteractionPresenterDidBeginInteraction:(id)arg1;
- (void)clickInteractionPresenterDidCommitToPresentation:(id)arg1;
- (_Bool)clickInteractionPresenterShouldBegin:(id)arg1;
- (id)containerViewForClickInteractionPresenter:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_handleTouchUpInsideWithEvent:(id)arg1;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)addTarget:(id)arg1 forPreviewInteractionPresentedContentWithAction:(SEL)arg2;
@property(copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

