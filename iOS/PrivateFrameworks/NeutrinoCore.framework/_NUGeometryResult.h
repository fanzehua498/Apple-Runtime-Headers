//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUGeometryResult-Protocol.h>

@class NSString, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NUGeometryResult : _NURenderResult <NUGeometryResult>
{
    NUImageGeometry *_geometry;
}

- (void).cxx_destruct;
@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

