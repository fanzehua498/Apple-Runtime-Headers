//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _excludePrimaryID;
    unsigned int _detailLevel;
    unsigned int _outputStyle;
    NSSet *_objectsToExclude;
    NSDictionary *_userInfo;
    NSString *_multilinePrefix;
}

+ (id)contextWithDetailLevel:(unsigned int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *multilinePrefix; // @synthesize multilinePrefix=_multilinePrefix;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSSet *objectsToExclude; // @synthesize objectsToExclude=_objectsToExclude;
@property(nonatomic) _Bool excludePrimaryID; // @synthesize excludePrimaryID=_excludePrimaryID;
@property(nonatomic) unsigned int outputStyle; // @synthesize outputStyle=_outputStyle;
@property(nonatomic) unsigned int detailLevel; // @synthesize detailLevel=_detailLevel;
- (unsigned int)derivedOutputStyle;
- (id)copyWithOutputStyle:(unsigned int)arg1;
- (id)copyWithDetailLevel:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithDetailLevel:(unsigned int)arg1;
- (id)init;

@end

