//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookUI/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol QLPreviewingController <NSObject>

@optional
- (void)preparePreviewOfFileAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)preparePreviewOfSearchableItemWithIdentifier:(NSString *)arg1 queryString:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

