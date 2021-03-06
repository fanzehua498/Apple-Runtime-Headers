//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, PKPaletteAutoMinimizeOptionCell, UIStackView, UITraitCollection;
@protocol PKPaletteMoreOptionsViewControllerDelegate;

@interface PKPaletteMoreOptionsViewController : UIViewController
{
    BOOL _autoHideOn;
    id <PKPaletteMoreOptionsViewControllerDelegate> _delegate;
    UITraitCollection *_externalTraitCollection;
    NSLayoutConstraint *_stackViewMinWidthConstraint;
    NSArray *_stackViewPositioningConstraints;
    UIStackView *_stackView;
    PKPaletteAutoMinimizeOptionCell *_autoMinimizeCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaletteAutoMinimizeOptionCell *autoMinimizeCell; // @synthesize autoMinimizeCell=_autoMinimizeCell;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *stackViewPositioningConstraints; // @synthesize stackViewPositioningConstraints=_stackViewPositioningConstraints;
@property(retain, nonatomic) NSLayoutConstraint *stackViewMinWidthConstraint; // @synthesize stackViewMinWidthConstraint=_stackViewMinWidthConstraint;
@property(retain, nonatomic) UITraitCollection *externalTraitCollection; // @synthesize externalTraitCollection=_externalTraitCollection;
@property(nonatomic, getter=isAutoHideOn) BOOL autoHideOn; // @synthesize autoHideOn=_autoHideOn;
@property(nonatomic) __weak id <PKPaletteMoreOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateContentSize;
- (void)_reloadItems;
- (void)_autoMinimizeCellDidChangeValue:(id)arg1;
- (void)_updateAutoMinimizeCell;
- (void)updateUIForTraitCollection:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end

