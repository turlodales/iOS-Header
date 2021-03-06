//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSPDNSResourceRecord : NSObject
{
    long long _type;
    NSString *_name;
    long long _recordClass;
    unsigned long long _timeToLive;
    unsigned long long _dataLength;
    NSString *_resourceString;
}

+ (id)typeToString:(long long)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *resourceString; // @synthesize resourceString=_resourceString;
@property(readonly) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly) unsigned long long timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly) long long recordClass; // @synthesize recordClass=_recordClass;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) long long type; // @synthesize type=_type;
- (id)copyStateDictionary;
- (id)initFromByteParser:(id)arg1;

@end

