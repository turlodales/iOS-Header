//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDQuantitySampleValueEnumerator : NSObject
{
}

+ (id)_propertiesForEnumeration;
+ (id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3;
+ (long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
+ (_Bool)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
+ (_Bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
+ (_Bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

@end

