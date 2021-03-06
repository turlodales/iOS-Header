//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFMyriadSessionMutating-Protocol.h>

@class AFMyriadSession, NSData, NSDictionary, NSString, NSUUID;

@interface _AFMyriadSessionMutation : NSObject <AFMyriadSessionMutating>
{
    AFMyriadSession *_baseModel;
    unsigned long long _generation;
    NSUUID *_sessionId;
    NSUUID *_currentElectionAdvertisementId;
    NSData *_currentElectionAdvertisementData;
    NSDictionary *_electionAdvertisementDataByIds;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasSessionId:1;
        unsigned int hasCurrentElectionAdvertisementId:1;
        unsigned int hasCurrentElectionAdvertisementData:1;
        unsigned int hasElectionAdvertisementDataByIds:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setElectionAdvertisementDataByIds:(id)arg1;
- (void)setCurrentElectionAdvertisementData:(id)arg1;
- (void)setCurrentElectionAdvertisementId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

