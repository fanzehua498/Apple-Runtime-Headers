//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDItem, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarMultilineStringView : UIView <_UIStatusBarDisplayable>
{
    int _numberOfLines;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) NSArray *stringViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) int overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

