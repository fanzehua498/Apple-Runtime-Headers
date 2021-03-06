//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Memories/NSCopying-Protocol.h>
#import <Memories/NSDictionaryCoding-Protocol.h>

@class NSString;

@interface FlexTransition : NSObject <NSCopying, NSDictionaryCoding>
{
    BOOL _prevented;
    BOOL _useNextSegmentForFadeOut;
    long long _fadeOut;
    long long _fadeIn;
    NSString *_transitionSegmentName;
}

+ (long long)validFadeLengthForLength:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL useNextSegmentForFadeOut; // @synthesize useNextSegmentForFadeOut=_useNextSegmentForFadeOut;
@property(readonly, copy, nonatomic) NSString *transitionSegmentName; // @synthesize transitionSegmentName=_transitionSegmentName;
@property(readonly, nonatomic) long long fadeIn; // @synthesize fadeIn=_fadeIn;
@property(readonly, nonatomic) long long fadeOut; // @synthesize fadeOut=_fadeOut;
@property(readonly, nonatomic) BOOL prevented; // @synthesize prevented=_prevented;
- (BOOL)isDefaultTransition;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodeAsDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTransitionSegmentNamed:(id)arg1 prevented:(BOOL)arg2 fadeOut:(long long)arg3 fadeIn:(long long)arg4 useNextSegmentForFadeOut:(BOOL)arg5;
- (id)init;

@end

