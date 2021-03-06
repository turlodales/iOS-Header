//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDCoreRoutineTransitionMotionType;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _duration;
    AWDCoreRoutineTransitionMotionType *_transitionHistogram;
    struct {
        unsigned int distance:1;
        unsigned int duration:1;
    } _has;
}

@property(retain, nonatomic) AWDCoreRoutineTransitionMotionType *transitionHistogram; // @synthesize transitionHistogram=_transitionHistogram;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransitionHistogram;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasDuration;
- (void)dealloc;

@end

