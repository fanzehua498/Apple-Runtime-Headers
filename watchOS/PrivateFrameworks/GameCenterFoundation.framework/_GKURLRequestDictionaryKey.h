//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>
{
    NSURLRequest *_request;
}

+ (id)keyWithRequest:(id)arg1;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)dealloc;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;

@end

