//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation
{
    NSDictionary *_storeBagDictionary;
}

- (void).cxx_destruct;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1;
- (id)recommendationsURLWithStoreBagDictionary:(id)arg1;
- (id)_produceResponseWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2 storeItemMetadataResults:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;

@end

