//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying>
{
    NSMutableArray *_attributes;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)close;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (BOOL)hasAttributes;
@property(copy, nonatomic) NSDictionary *attributesAsDictionary;
- (id)initWithXMLAttributes:(id)arg1;
- (id)init;
- (void)writeAttributes:(id)arg1;

@end

