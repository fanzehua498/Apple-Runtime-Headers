//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <ATVLegacyContentKit/TVColumnRowViewDelegate-Protocol.h>

@class NSString, TVImageProxy, TVLColumnRowView, TVLColumnRowViewDataSource, TVLTableElement, UIImageView, UILabel, UIView;

@interface TVLBaseballStandingsCollectionViewCell : UICollectionViewCell <TVColumnRowViewDelegate>
{
    TVImageProxy *_backgroundImageProxy;
    TVLTableElement *_tableElement;
    UILabel *_titleLabel;
    UIView *_dividerView;
    UIImageView *_backgroundImageView;
    TVLColumnRowView *_tableView;
    TVLColumnRowViewDataSource *_tableViewDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TVLColumnRowViewDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(retain, nonatomic) TVLColumnRowView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TVLTableElement *tableElement; // @synthesize tableElement=_tableElement;
@property(retain, nonatomic) TVImageProxy *backgroundImageProxy; // @synthesize backgroundImageProxy=_backgroundImageProxy;
- (void)setBackgroundImage:(id)arg1;
- (double)headerHeightForColumnRowView:(id)arg1;
- (double)columnRowView:(id)arg1 heightForRow:(long long)arg2;
- (double)columnRowView:(id)arg1 widthForColumn:(long long)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setHighlightProgress:(double)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

