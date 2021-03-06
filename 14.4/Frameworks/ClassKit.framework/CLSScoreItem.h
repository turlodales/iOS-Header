//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSActivityItem.h>

@interface CLSScoreItem : CLSActivityItem
{
    double _score;
    double _maxScore;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double maxScore;
@property(nonatomic) double score;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_init;

@end

