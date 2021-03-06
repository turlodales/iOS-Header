//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject
{
    NSArray *_momentNodes;
    NSMutableDictionary *_countBySpecialPOI;
}

+ (id)_nameBySpecialPOI;
+ (id)_regionsBySpecialPOI;
+ (unsigned long long)specialPOIsWithNameInString:(id)arg1;
+ (_Bool)specialPOINameIsInString:(id)arg1;
+ (unsigned long long)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *countBySpecialPOI; // @synthesize countBySpecialPOI=_countBySpecialPOI;
@property(readonly, nonatomic) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;
- (unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2;
- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1;
- (_Bool)anyMomentHasPOIAmusementPark;
- (unsigned long long)specialPOIsWithMomentRatio:(double)arg1;
- (unsigned long long)specialPOIsInAnyMoment;
- (_Bool)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2;
- (_Bool)anyMomentContainsSpecialPOI:(unsigned long long)arg1;
- (id)initWithMomentNodes:(id)arg1;

@end

