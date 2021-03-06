//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)allChangeBatches;
- (id)popAllChangeBatchesWithError:(id *)arg1;
- (BOOL)compactChangeBatchesWithError:(id *)arg1;
- (BOOL)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;
- (BOOL)deleteAllChangeBatchesWithError:(id *)arg1;
- (BOOL)hasSomeChangeWithScopeFilter:(id)arg1;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id)arg1;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (BOOL)popNextBatchWithError:(id *)arg1;
- (id)nextBatch;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (BOOL)hasQueuedBatches;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) unsigned long long countOfQueuedBatches;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

