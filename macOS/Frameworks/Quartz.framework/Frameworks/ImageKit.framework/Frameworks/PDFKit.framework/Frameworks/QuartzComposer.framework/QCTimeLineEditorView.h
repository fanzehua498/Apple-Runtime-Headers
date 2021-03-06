//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSScrollView, QCKeyFrameEditor, QCTimeLineView;

__attribute__((visibility("hidden")))
@interface QCTimeLineEditorView : NSView
{
    QCKeyFrameEditor *keyFrameEditor;
    NSButton *createNewTimeLine;
    NSButton *removeSelectedTimeLine;
    NSButton *curveHullsButton;
    NSButton *legendVisibleButton;
    NSButton *controlPointsButton;
    NSButton *fitSelectedButton;
    NSButton *fitAllButton;
    NSScrollView *_scrollView;
    QCTimeLineView *_timeLineView;
}

- (void)tlZoomOut:(id)arg1;
- (void)tlZoomIn:(id)arg1;
- (void)tlZoomToFitSelection:(id)arg1;
- (void)tlZoomToFitAll:(id)arg1;
- (void)toggleLegendVisible:(id)arg1;
- (void)toggleCurveHulls:(id)arg1;
- (void)removeSelectedTimeLine:(id)arg1;
- (void)createNewTimeLine:(id)arg1;
- (void)setPatch:(id)arg1;
- (void)updateUI:(id)arg1;
- (void)dealloc;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)isOpaque;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

