//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InputMethodKit/NSObject-Protocol.h>

@class IMKCandidate, IMKCandidateList;
@protocol IMKCandidateMenuDelegate;

@protocol IMKCandidateMenu <NSObject>
@property(nonatomic) unsigned long long candidateStyle;
@property(readonly, nonatomic) IMKCandidateList *visibleCandidates;
@property(retain, nonatomic) IMKCandidate *focusedCandidate;
@property(readonly, nonatomic) BOOL isShown;
@property(nonatomic) __weak id <IMKCandidateMenuDelegate> delegate;
- (BOOL)selectCandidateNumbered:(unsigned long long)arg1;
- (void)selectFocusedCandidate;
- (void)moveFocusUp;
- (void)moveFocusDown;
- (void)moveFocusRight;
- (void)moveFocusLeft;
- (void)hide;
- (void)showCandidates:(IMKCandidateList *)arg1;
@end

