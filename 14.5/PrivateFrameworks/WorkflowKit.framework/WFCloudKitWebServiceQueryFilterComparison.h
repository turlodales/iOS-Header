//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSString;

@interface WFCloudKitWebServiceQueryFilterComparison : WFCloudKitWebServiceQueryFilter
{
    NSString *_recordKey;
    unsigned long long _type;
    NSString *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
- (id)stringRepresentationWithRecordType:(id)arg1;

@end

