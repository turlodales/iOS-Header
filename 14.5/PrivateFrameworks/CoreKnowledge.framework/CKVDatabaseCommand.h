//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface CKVDatabaseCommand : NSObject <NSCopying>
{
    NSString *_commandString;
    NSArray *_parameters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *commandString; // @synthesize commandString=_commandString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCommand:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)description;
- (id)initWithCommandString:(id)arg1 parameters:(id)arg2;

@end

