//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (EmailFoundationAdditions)
- (void)ef_trimToCount:(unsigned long long)arg1 fromStart:(_Bool)arg2;
- (void)ef_addOptionalObject:(id)arg1;
- (unsigned long long)ef_removeObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (unsigned long long)ef_removeObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 allowDuplicates:(_Bool)arg4;
- (unsigned long long)ef_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 allowDuplicates:(_Bool)arg3;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;
- (void)ef_reverseObjects;
- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;
- (void)ef_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (_Bool)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (_Bool)ef_addObjectIfAbsent:(id)arg1;
@end

