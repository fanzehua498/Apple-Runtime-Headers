//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSURLConnection, NSURLRequest, _PKURLConnectionDelegate;

@interface PKURLConnection : NSObject
{
    CDUnknownBlockType _challengeBlock;
    CDUnknownBlockType _redirectResponseBlock;
    NSLock *_connectionLock;
    NSURLConnection *_urlConnection;
    _PKURLConnectionDelegate *_pkConnectionDelegate;
    NSURLRequest *_urlRequest;
    NSString *_destinationDirectory;
}

@property(retain, nonatomic) NSString *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain) _PKURLConnectionDelegate *pkConnectionDelegate; // @synthesize pkConnectionDelegate=_pkConnectionDelegate;
@property(retain) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain) NSLock *connectionLock; // @synthesize connectionLock=_connectionLock;
- (BOOL)_startSynchronousDownloadNotifyingOnQueue:(id)arg1 onThread:(id)arg2 returningResponse:(id *)arg3 withBytesReceivedHandler:(CDUnknownBlockType)arg4 withOutData:(id *)arg5 withOutLocation:(id *)arg6 withError:(id *)arg7;
- (BOOL)startSynchronousDownloadNotifyingOnQueue:(id)arg1 returningResponse:(id *)arg2 withBytesReceivedHandler:(CDUnknownBlockType)arg3 withOutData:(id *)arg4 withOutLocation:(id *)arg5 withError:(id *)arg6;
- (BOOL)startSynchronousDownloadNotifyingOnThread:(id)arg1 returningResponse:(id *)arg2 withBytesReceivedHandler:(CDUnknownBlockType)arg3 withOutData:(id *)arg4 withOutLocation:(id *)arg5 withError:(id *)arg6;
- (BOOL)startSynchronousDownloadReturningResponse:(id *)arg1 withBytesReceivedHandler:(CDUnknownBlockType)arg2 withOutData:(id *)arg3 withOutLocation:(id *)arg4 withError:(id *)arg5;
- (void)_startAsyncDownloadNotifyingOnQueue:(id)arg1 notifyOnThread:(id)arg2 withBytesReceivedHandler:(CDUnknownBlockType)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)startAsyncDownloadNotifyingOnThread:(id)arg1 withBytesReceivedHandler:(CDUnknownBlockType)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)startAsyncDownloadNotifyingOnQueue:(id)arg1 withBytesReceivedHandler:(CDUnknownBlockType)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 withAuthenticationHandler:(CDUnknownBlockType)arg3 withRedirectResponseHandler:(CDUnknownBlockType)arg4;
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 withAuthenticationHandler:(CDUnknownBlockType)arg3;
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2;
- (id)init;

@end

