//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BSProtobufSchema;

@protocol BSProtobufSerializable <NSObject>
+ (BSProtobufSchema *)protobufSchema;

@optional
- (id)initProtobufTranslatorForObject:(id)arg1;
- (id)didFinishProtobufDecodingWithError:(out id *)arg1;
- (id)initForProtobufDecoding;
@end

