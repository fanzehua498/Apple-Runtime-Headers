//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityVisuals/AXVVoiceOverStyleWindow.h>

@class AXVBrailleScrollView, AXVFlippedContentView, NSAttributedString, NSMutableArray, NSTextView, NSWindow;

@interface AXVBrailleWindow : AXVVoiceOverStyleWindow
{
    double _fontSize;
    NSAttributedString *__brailleWithTransliteration;
    long long __brailleCursorIndex;
    long long __brailleCellWindowOffset;
    NSMutableArray *__brailleHistoryStrings;
    NSWindow *__brailleHistoryWindow;
    NSTextView *__brailleHistoryTextView;
    AXVFlippedContentView *__brailleContentView;
    NSMutableArray *__brailleWords;
    AXVBrailleScrollView *__brailleScrollView;
    NSMutableArray *__brailleWordViews;
    long long __visibleBrailleWordViewCount;
    double __widthOfWindowStackViewLeadingButton;
    struct _NSRange __brailleCellRange;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setWidthOfWindowStackViewLeadingButton:) double _widthOfWindowStackViewLeadingButton; // @synthesize _widthOfWindowStackViewLeadingButton=__widthOfWindowStackViewLeadingButton;
@property(nonatomic, setter=_setVisibleBrailleWordViewCount:) long long _visibleBrailleWordViewCount; // @synthesize _visibleBrailleWordViewCount=__visibleBrailleWordViewCount;
@property(retain, nonatomic, setter=_setBrailleWordViews:) NSMutableArray *_brailleWordViews; // @synthesize _brailleWordViews=__brailleWordViews;
@property(retain, nonatomic, setter=_setBrailleScrollView:) AXVBrailleScrollView *_brailleScrollView; // @synthesize _brailleScrollView=__brailleScrollView;
@property(retain, nonatomic, setter=_setBrailleWords:) NSMutableArray *_brailleWords; // @synthesize _brailleWords=__brailleWords;
@property(retain, nonatomic, setter=_setBrailleContentView:) AXVFlippedContentView *_brailleContentView; // @synthesize _brailleContentView=__brailleContentView;
@property(retain, nonatomic, setter=_setBrailleHistoryTextView:) NSTextView *_brailleHistoryTextView; // @synthesize _brailleHistoryTextView=__brailleHistoryTextView;
@property(retain, nonatomic, setter=_setBrailleHistoryWindow:) NSWindow *_brailleHistoryWindow; // @synthesize _brailleHistoryWindow=__brailleHistoryWindow;
@property(retain, nonatomic, setter=_setBrailleHistoryStrings:) NSMutableArray *_brailleHistoryStrings; // @synthesize _brailleHistoryStrings=__brailleHistoryStrings;
@property(nonatomic, setter=_setBrailleCellWindowOffset:) long long _brailleCellWindowOffset; // @synthesize _brailleCellWindowOffset=__brailleCellWindowOffset;
@property(nonatomic, setter=_setBrailleCursorIndex:) long long _brailleCursorIndex; // @synthesize _brailleCursorIndex=__brailleCursorIndex;
@property(nonatomic, setter=_setBrailleCellRange:) struct _NSRange _brailleCellRange; // @synthesize _brailleCellRange=__brailleCellRange;
@property(retain, nonatomic, setter=_setBrailleWithTransliteration:) NSAttributedString *_brailleWithTransliteration; // @synthesize _brailleWithTransliteration=__brailleWithTransliteration;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void)_updateBrailleWindowHistoryStrings;
- (void)_printAverageTimeToUpdateBrailleInfoWithStartTime:(double)arg1;
- (void)_scrollContentViewToBeginning;
- (double)_heightOfBrailleAndTransliteration;
- (double)_widthOfBrailleAndTransliteration;
- (void)_updateBrailleContentViewFrame;
- (void)_updateBrailleWordViews;
- (void)_updateWindowFrame;
- (double)_recalculateWindowHeight;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)_setupBrailleHistoryTextViewForWindow:(id)arg1;
- (void)_pressCloseCaptionTextHistoryWindow;
- (void)_setupBrailleHistoryWindow;
- (void)_pressedHistoryButton;
- (id)_setupHistoryButton;
- (id)_setupButtonStackView;
- (id)_createBrailleScrollViewWithFrame:(struct CGRect)arg1;
- (void)_setupWindowStackView;
- (void)_getResizeEdgeAndCornerThicknesses:(double [8])arg1;
- (void)_updateBrailleWords;
- (void)_updateBraillePropertiesWithInfo:(id)arg1;
- (void)updateWithBrailleInfo:(id)arg1;
- (id)init;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

