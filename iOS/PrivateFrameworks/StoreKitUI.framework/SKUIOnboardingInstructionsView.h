//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingInstructionsView : UIView
{
    struct UIEdgeInsets _contentInset;
    long long _contentPosition;
    UILabel *_explanationLabel;
    NSMutableArray *_labelsStack;
    UILabel *_titleLabel;
}

+ (id)titleAttributedStringWithString:(id)arg1;
+ (id)explanationAttributedStringWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(nonatomic) long long contentPosition; // @synthesize contentPosition=_contentPosition;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (id)_newTitleLabel;
- (id)_newExplanationLabel;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setContentPosition:(long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)pushLabelState;
- (void)popLabelState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

