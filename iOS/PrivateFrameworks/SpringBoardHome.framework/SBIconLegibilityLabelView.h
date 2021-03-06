//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UILegibilityView.h>

#import <SpringBoardHome/SBIconLabelView-Protocol.h>

@class SBIconLabelImageParameters, SBIconView, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView <SBIconLabelView>
{
    SBIconView *_iconView;
    SBIconLabelImageParameters *_imageParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBIconLabelImageParameters *imageParameters; // @synthesize imageParameters=_imageParameters;
@property(nonatomic) __weak SBIconView *iconView; // @synthesize iconView=_iconView;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *image;

@end

