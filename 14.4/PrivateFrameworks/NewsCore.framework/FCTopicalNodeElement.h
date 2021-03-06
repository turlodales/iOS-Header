//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSSet, NSString;

@interface FCTopicalNodeElement : NSObject <NSCopying>
{
    NSString *_identifier;
    NSSet *_topics;
    double _score;
}

- (void).cxx_destruct;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSSet *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 topics:(id)arg2 score:(double)arg3;

@end

