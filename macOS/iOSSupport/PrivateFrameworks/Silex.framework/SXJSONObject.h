//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SXJSONObject : NSObject
{
    struct os_unfair_lock_s _unfairLock;
    NSDictionary *_jsonDictionary;
    NSString *_specificationVersion;
    NSMutableDictionary *_objectStorage;
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
+ (void)unlock;
+ (void)lock;
+ (id)protocolPropertyDefinitions;
+ (id)propertyDefinitions;
+ (id)propertyHashTable;
+ (void)initialize;
+ (Class)classOverrideAtInitialization:(Class)arg1 type:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
@property(readonly, nonatomic) NSMutableDictionary *objectStorage; // @synthesize objectStorage=_objectStorage;
@property(readonly, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
- (id)JSONRepresentation;
- (id)valueForLookupKey:(id)arg1;
- (void)storeValue:(id)arg1 forLookupKey:(id)arg2;
- (id)objectForLookupKey:(id)arg1;
- (void)storeObject:(id)arg1 forLookupKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)jsonData;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONData:(id)arg1 andVersion:(id)arg2;

@end

