//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInvocation, NSString;

__attribute__((visibility("hidden")))
@interface _PBProperty : NSObject
{
    NSString *_name;
    Class _objectType;
    Class _subObjectType;
    BOOL _type;
    BOOL _subType;
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    CDUnknownFunctionPointerType _toDictionaryReprFn;
    CDUnknownFunctionPointerType _fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    unsigned long long _structSize;
}

- (id)description;
- (void)dealloc;

@end

