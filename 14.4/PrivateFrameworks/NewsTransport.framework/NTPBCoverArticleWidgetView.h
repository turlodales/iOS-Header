//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying>
{
    int _coverArticleWidgetArticleCount;
    NSData *_coverArticleWidgetViewingSessionId;
    CDStruct_bb0d9f0d _has;
}

- (void).cxx_destruct;
@property(nonatomic) int coverArticleWidgetArticleCount; // @synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount;
@property(retain, nonatomic) NSData *coverArticleWidgetViewingSessionId; // @synthesize coverArticleWidgetViewingSessionId=_coverArticleWidgetViewingSessionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCoverArticleWidgetArticleCount;
@property(readonly, nonatomic) _Bool hasCoverArticleWidgetViewingSessionId;

@end

