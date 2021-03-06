//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

__attribute__((visibility("hidden")))
@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator
{
    int _zoneRowBindOffset;
    unsigned long long _returning;
    unsigned long long _zoneRow;
}

@property(readonly, nonatomic) int zoneRowBindOffset; // @synthesize zoneRowBindOffset=_zoneRowBindOffset;
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(readonly, nonatomic) unsigned long long returning; // @synthesize returning=_returning;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(_Bool *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 returning:(unsigned long long)arg3;

@end

