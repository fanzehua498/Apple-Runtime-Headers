//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/NSObject-Protocol.h>

@class OKDocument;

@protocol OKDocumentDelegate <NSObject>

@optional
- (void)documentContentsDidUpdate:(OKDocument *)arg1;
- (void)documentContentsWillUpdate:(OKDocument *)arg1;
@end

