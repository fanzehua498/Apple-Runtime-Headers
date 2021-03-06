//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUChevronButton, HUColoredButton, NSArray, UILabel;
@protocol HUGridEmptyHomeViewDelegate;

@interface HUGridEmptyHomeView : UIView
{
    id <HUGridEmptyHomeViewDelegate> _delegate;
    UILabel *_instructionsLabel;
    HUColoredButton *_addAccessoryButton;
    HUChevronButton *_learnToAddAccessoryButton;
    HUChevronButton *_storeButton;
    NSArray *_constraints;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) HUChevronButton *storeButton; // @synthesize storeButton=_storeButton;
@property(retain, nonatomic) HUChevronButton *learnToAddAccessoryButton; // @synthesize learnToAddAccessoryButton=_learnToAddAccessoryButton;
@property(retain, nonatomic) HUColoredButton *addAccessoryButton; // @synthesize addAccessoryButton=_addAccessoryButton;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(nonatomic) __weak id <HUGridEmptyHomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;
- (void)_openLearnToAddAccessories:(id)arg1;
- (void)_openStore:(id)arg1;
- (void)_addNewAccessory:(id)arg1;
@property(readonly, nonatomic) BOOL canAddAccessories;
- (void)didMoveToSuperview;
- (void)tintColorDidChange;
- (void)_setupCommonAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

