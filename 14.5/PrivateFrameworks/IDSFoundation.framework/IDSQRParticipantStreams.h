//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface IDSQRParticipantStreams : NSObject
{
    NSNumber *_participantID;
    NSMutableArray *_streamArray;
    _Bool _anyParticipant;
    _Bool _anyStream;
}

+ (id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(_Bool)arg3 anyStream:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool anyStream; // @synthesize anyStream=_anyStream;
@property(readonly, nonatomic) _Bool anyParticipant; // @synthesize anyParticipant=_anyParticipant;
@property(readonly) NSMutableArray *streamArray; // @synthesize streamArray=_streamArray;
@property(readonly) NSNumber *participantID; // @synthesize participantID=_participantID;
- (id)description;
- (id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(_Bool)arg3 anyStream:(_Bool)arg4;

@end

