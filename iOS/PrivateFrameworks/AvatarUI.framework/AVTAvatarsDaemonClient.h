//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarsDaemon-Protocol.h>

@protocol AVTUILogger;

@interface AVTAvatarsDaemonClient : NSObject <AVTAvatarsDaemon>
{
    id <AVTUILogger> _logger;
    CDUnknownBlockType _connectionFactory;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
- (void)checkIn;
- (void)performWorkWithSynchronousProxy:(CDUnknownBlockType)arg1;
- (void)performWorkWithConnection:(CDUnknownBlockType)arg1;
- (id)initWithConnectionFactory:(CDUnknownBlockType)arg1 logger:(id)arg2;
- (id)initWithLogger:(id)arg1;

@end

