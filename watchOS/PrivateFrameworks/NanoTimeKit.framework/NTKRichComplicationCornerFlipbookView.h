//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCornerStackedTextView.h>

@class NSDate, NSDateFormatter;

@interface NTKRichComplicationCornerFlipbookView : NTKRichComplicationCornerStackedTextView
{
    NSDateFormatter *_formatter;
    _Bool _isFlipbook;
    NSDate *_frameSpecifierDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *frameSpecifierDate; // @synthesize frameSpecifierDate=_frameSpecifierDate;
@property(nonatomic) _Bool isFlipbook; // @synthesize isFlipbook=_isFlipbook;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (void)updateLabels;
- (void)dealloc;
- (id)init;

@end

