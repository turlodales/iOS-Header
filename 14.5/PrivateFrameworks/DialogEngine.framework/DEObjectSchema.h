//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEObjectSchema : NSObject
{
    struct ObjectSchema *_This;
}

+ (id)schema:(id)arg1 typeName:(id)arg2;
@property struct ObjectSchema *This; // @synthesize This=_This;
- (id)input:(id)arg1 name:(id)arg2;
- (id)inputNames:(id)arg1;
- (id)property:(id)arg1 name:(id)arg2;
- (id)propertyNames:(id)arg1;
@property(readonly) NSString *description;
@property(readonly) NSString *baseObject;
@property(readonly) NSString *name;
- (id)initWithPtr:(struct ObjectSchema *)arg1;
- (id)init;

@end

