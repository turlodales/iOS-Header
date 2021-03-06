//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSDictionary, PTModule, PTSettingsClassStructure;

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding>
{
    PTSettingsClassStructure *_structure;
    NSDictionary *_childDefinitions;
    NSDictionary *_defaultValueArchive;
    PTModule *_module;
}

+ (_Bool)supportsSecureCoding;
+ (id)definitionForSettingsClass:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PTModule *module; // @synthesize module=_module;
@property(retain, nonatomic) NSDictionary *defaultValueArchive; // @synthesize defaultValueArchive=_defaultValueArchive;
@property(retain, nonatomic) NSDictionary *childDefinitions; // @synthesize childDefinitions=_childDefinitions;
@property(retain, nonatomic) PTSettingsClassStructure *structure; // @synthesize structure=_structure;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)allSettingsClassesExistAndHaveCorrectVersion;
- (Class)settingsClass;

@end

