//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSConstantArray;

__attribute__((visibility("hidden")))
@interface __NSConstantArrayEnumerator : NSEnumerator
{
    NSConstantArray *_underlyingArray;
    unsigned int _index;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithConstantArray:(id)arg1;

@end

