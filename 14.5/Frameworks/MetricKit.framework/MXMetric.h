//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding>
{
    NSMeasurementFormatter *_measurementFormatter;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
- (id)dictionaryRepresentation;
- (id)DictionaryRepresentation;
- (id)JSONRepresentation;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

