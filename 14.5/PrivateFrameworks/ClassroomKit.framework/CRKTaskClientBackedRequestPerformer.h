//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKRequestPerformingProtocol-Protocol.h>

@class CATTaskClient, NSString;

@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol>
{
    CATTaskClient *_taskClient;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CATTaskClient *taskClient; // @synthesize taskClient=_taskClient;
- (id)operationForRequest:(id)arg1;
- (id)initWithTaskClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

