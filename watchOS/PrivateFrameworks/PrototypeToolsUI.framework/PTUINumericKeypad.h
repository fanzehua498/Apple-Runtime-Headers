//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PrototypeToolsUI/_KeypadButtonTarget-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSString, UILabel, _KeypadButton, _KeypadDismissButton;
@protocol PTUINumericKeypadDelegate;

@interface PTUINumericKeypad : UIView <_KeypadButtonTarget>
{
    id <PTUINumericKeypadDelegate> _delegate;
    _Bool _showing;
    UILabel *_valueLabel;
    NSArray *_digitButtons;
    _KeypadButton *_dotButton;
    _KeypadButton *_signButton;
    _KeypadButton *_clearButton;
    _KeypadButton *_backspaceButton;
    _KeypadDismissButton *_dismissButton;
    UIView *_backgroundView;
    NSMutableArray *_digitsBeforeDot;
    NSMutableArray *_digitsAfterDot;
    _Bool _negative;
    _Bool _hasDot;
    NSNumber *_cachedNumberValue;
    NSString *_cachedStringValue;
}

+ (id)sharedKeypad;
- (void).cxx_destruct;
- (void)_flash;
- (void)_dismissButtonPress;
- (void)_backspace;
- (void)_clear;
- (void)_changeSign;
- (void)_appendDot;
- (unsigned int)_remainingAllowedDigits;
- (void)_appendDigit:(unsigned int)arg1;
- (void)keyPress:(id)arg1;
- (void)_updateDisplayedValue;
- (float)_layoutButtonRow:(id)arg1 atY:(float)arg2 stretch:(_Bool)arg3;
- (float)_layoutButtonRow:(id)arg1 atY:(float)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) NSString *stringValue;
@property(nonatomic) double doubleValue;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1 forDelegate:(id)arg2;
- (id)init;

@end

