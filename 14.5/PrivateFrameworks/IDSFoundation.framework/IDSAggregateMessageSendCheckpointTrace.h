//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace
{
    APSOutgoingMessageCheckpointTrace *_apsMessageTrace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) APSOutgoingMessageCheckpointTrace *apsMessageTrace; // @synthesize apsMessageTrace=_apsMessageTrace;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;

@end

