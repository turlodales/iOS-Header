//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface LAManagedACMParameter : NSObject
{
    NSString *_description;
    CDStruct_8f1b89e2 *_acmParameter;
    NSMutableData *_data;
}

+ (id)acmParameterWithTimeOffset:(unsigned int)arg1;
+ (id)acmParameterWithUserId:(unsigned int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(readonly, nonatomic) CDStruct_8f1b89e2 *acmParameter; // @synthesize acmParameter=_acmParameter;
- (id)description;
- (id)initWithACMParamType:(unsigned int)arg1 bytes:(void *)arg2 length:(unsigned long long)arg3 description:(id)arg4;

@end

