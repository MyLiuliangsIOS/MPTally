//
//  DateValueFormatter.h
//  MPTally
//
//  Created by Maple on 2017/3/27.
//  Copyright © 2017年 Maple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPTally-Bridging-Header.h"

@interface DateValueFormatter : NSObject<IChartAxisValueFormatter>

-(id)initWithArr:(NSArray *)arr;

@end
