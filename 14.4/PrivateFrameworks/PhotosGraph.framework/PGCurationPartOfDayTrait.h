//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait
{
    unsigned long long _value;
}

@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)debugDescription;
- (id)niceDescription;
- (_Bool)isActive;
- (id)initWithPartOfDay:(unsigned long long)arg1;

@end

