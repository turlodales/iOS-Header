//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDRep.h>

#import <TSDrawables/TSDMutableContainerRep-Protocol.h>

@class NSObject, NSString;
@protocol TSDContainerInfo, TSDMutableContainerInfo;

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>
{
}

@property(readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (id)initWithLayout:(id)arg1 canvasView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

