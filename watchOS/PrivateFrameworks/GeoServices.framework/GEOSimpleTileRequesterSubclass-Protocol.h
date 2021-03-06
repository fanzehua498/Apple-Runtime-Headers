//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GEOTileData, GEOURLWithHeaders, NSData, NSError, NSObject, NSString, _GEOSimpleTileRequesterOperation;
@protocol OS_xpc_object;

@protocol GEOSimpleTileRequesterSubclass
- (GEOURLWithHeaders *)urlForTileKey:(const struct _GEOTileKey *)arg1;

@optional
- (GEOTileData *)processTileData:(GEOTileData *)arg1 error:(id *)arg2;
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(_GEOSimpleTileRequesterOperation *)arg2 error:(NSError *)arg3;
- (void)finishedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(_GEOSimpleTileRequesterOperation *)arg2;
- (_Bool)downloadsDataToDisk;
- (_Bool)allowsCookies;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (NSString *)mergeBaseTileEtag:(NSString *)arg1 withLocalizationTileEtag:(NSString *)arg2;
- (NSData *)mergeBaseTile:(NSData *)arg1 withLocalizationTile:(NSData *)arg2;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (NSString *)editionHeader;
- (NSObject<OS_xpc_object> *)newXPCDataRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (GEOURLWithHeaders *)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;
@end

