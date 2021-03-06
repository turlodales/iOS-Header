//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INCodableDescription, INJSONDecoder, INJSONEncoder;

@protocol INJSONSerializable <NSObject>

@optional
+ (id)_intents_decodeWithJSONDecoder:(INJSONDecoder *)arg1 codableDescription:(INCodableDescription *)arg2 from:(id)arg3;
- (void)_intents_decodeWithJSONDecoder:(INJSONDecoder *)arg1 codableDescription:(INCodableDescription *)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(INJSONEncoder *)arg1 codableDescription:(INCodableDescription *)arg2;
@end

