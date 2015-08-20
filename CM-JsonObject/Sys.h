//
//  Sys.h
//  CM-JsonObject
//
//  Created by chava on 8/19/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sys : NSObject
@property (nonatomic) int                   type;
@property (nonatomic) int                   ID;
@property (nonatomic) float                 message;
@property (nonatomic,strong)  NSString      *country;
@property (nonatomic) long                  sunrise;
@property (nonatomic) long                  sunset;
@end
