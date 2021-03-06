//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer
{
}

@property(nonatomic) unsigned int packetCount;
@property(readonly, nonatomic) void *data;
@property(readonly, nonatomic) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly, nonatomic) int maximumPacketSize;
@property(readonly, nonatomic) unsigned int packetCapacity;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2 maximumPacketSize:(int)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned int byteCapacity; // @dynamic byteCapacity;
@property(nonatomic) unsigned int byteLength; // @dynamic byteLength;

@end

